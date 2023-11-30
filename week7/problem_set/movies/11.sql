SELECT title FROM movies
JOIN ratings ON ratings.movie_id = movies.id
JOIN stars ON ratings.movie_id = stars.movie_id
JOIN people ON people.id = stars.person_id
WHERE people.name = 'Chadwick Boseman';

